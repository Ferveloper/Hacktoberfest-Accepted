#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
    
using namespace std;
    
const int maxN = 8;
const int maxL = (1 << 9);
const int maxD = 65;
const int maxC = 100;
int d[2][maxL][maxD][maxC];
int n, m, k;
    
string s[maxN];
    
map < vector < int >, int > M;
vector < int > revM[maxC];
int unusedM[maxC];
int M_size = 0;
    
int compress(vector < int >* a) {
    vector < int > used(a->size(), -1);
    int colors = 0;
    for (int i = 0; i < (n + 1); ++i) {
        if (a->at(i) == -1) {
            continue;
        }
        if (used[a->at(i)] == -1) {
            used[a->at(i)] = colors;
            ++colors;
        }
        a->at(i) = used[a->at(i)];
    }
    if (M.count(*a) == 0) {
        revM[M_size] = *a;
        M[*a] = M_size++;
    }
    
    int res = a->size();
    for (int i = (int)(a->size()) - 1; i >= 0; --i) {
        if (used[i] == -1) {
            res = i;
        } else {
            break;
        }
    }
    unusedM[M[*a]] = res;
    return res;
}
    
int p[maxN][maxN];
int res = 0;
    
int used[maxN][maxN];
    
void dfs(int x, int y, int color) {
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return ;
    }
    if (p[x][y] != color) {
        return ;
    }
    
    if (used[x][y]) {
        return ;
    }
    
    used[x][y] = true;
    
    if (p[x][y] == color) {
        dfs(x + 1, y, color);
        dfs(x - 1, y, color);
        dfs(x, y - 1, color);
        dfs(x, y + 1, color);
    }
}
    
void dfs2(int x, int y, int rows, int color) {
    if (x < 0 || x >= rows || y < 0 || y >= m) {
        return ;
    }
    if (p[x][y] != color) {
        return ;
    }
    
    if (used[x][y]) {
        return ;
    }
    
    used[x][y] = true;
    
    if (p[x][y] == color) {
        dfs2(x + 1, y, rows, color);
        dfs2(x - 1, y, rows, color);
        dfs2(x, y - 1, rows, color);
        dfs2(x, y + 1, rows, color);
    }
}
    
bool check() {
    int cntT = 0, cntD = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (p[i][j] == 1) {
                ++cntT;
            } else {
                ++cntD;
            }
        }
    }
    
    if (abs(cntT - cntD) > k) {
        return false;
    }
    
    int x1 = -1, y1 = -1;
    int x2 = -1, y2 = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (p[i][j] == 1) {
                x1 = i, y1 = j;
            } else {
                x2 = i, y2 = j;
            }
        }
    }
    
    memset(used, 0, sizeof(used));
    dfs(x1, y1, 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (p[i][j] == 1 && !used[i][j]) {
                return false;
            }
        }
    }
    memset(used, 0, sizeof(used));
    dfs(x2, y2, 2);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (p[i][j] == 2 && !used[i][j]) {
                return false;
            }
        }
    }
    return true;
}
    
bool connected[1 << maxN][1 << maxN];
    
void precalc() {
    for (int maskA = 0; maskA < (1 << m); ++maskA) {
        for (int maskB = 0; maskB < (1 << m); ++maskB) {
            int ones = 0;
            int twos = 0;
    
            int onesB = 0;
            int twosB = 0;
    
            for (int i = 0; i < m; ++i) {
                if ((maskA & (1 << i)) == 0) {
                    ones = 1;
                } else {
                    twos = 1;
                }
    
                if ((maskA & (1 << i)) == 0) {
                    onesB = 1;
                } else {
                    twosB = 1;
                }
            }
    
            bool nice = true;
            for (int i = 0; i < m; ++i) {
                if ((maskA & (1 << i)) == 0 && (maskB & (1 << i)) == 0) {
                    nice = false;
                }
            }
    
            connected[maskA][maskB] = true;
            if (ones && nice && onesB) {
                connected[maskA][maskB] = false;
            }
    
            nice = true;
            for (int i = 0; i < m; ++i) {
                if ((maskA & (1 << i)) != 0 && (maskB & (1 << i)) != 0) {
                    nice = false;
                }
            }
    
            if (ones && nice && twosB) {
                connected[maskA][maskB] = false;
            }
        }
    }
}
    
bool check(int rows) {
    for (int i = 0; i + 1 < rows; ++i) {
        for (int j = 0; j < m; ++j) {
    
            for (int x = 0; x < rows; ++x) {
                for (int y = 0; y < m; ++y) {
                    used[x][y] = false;
                }
            }
    
            dfs2(i, j, rows, p[i][j]);
    
            bool dead = true;
            for (int k = 0; k < m; ++k) {
                if (used[rows - 1][k]) {
                    dead = false;
                }
            }
    
            if (!dead) {
                continue;
            }
    
            for (int x = 0; x < rows; ++x) {
                for (int y = 0; y < m; ++y) {
                    if (!used[x][y] && p[x][y] == p[i][j]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
    
void rec(int filled) {
    if (filled == n * m) {
        if (check()) {
            /*for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (p[i][j] == 1) {
                        printf("1");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n");*/
            ++res;
        }
        return ;
    }
    
    int x = filled / m;
    int y = filled % m;
    
    if (y == 0) {
        if (x >= 2) {
            if (!check(x)) {
                return ;
            }
            /*int maskA = 0;
            int maskB = 0;
    
            for (int i = 0; i < n; ++i) {
                maskA = maskA * 2 + (p[x - 2][i] - 1);
                maskB = maskB * 2 + (p[x - 1][i] - 1);
            }
    
            if (!connected[maskA][maskB]) {
                return ;
            }*/
        }
    }
    
    bool nice = false;
    
    if (s[x][y] == 'T') {
        p[x][y] = 1;
        nice = true;
        if (x > 0 && y > 0 && p[x - 1][y - 1] == 1 && p[x - 1][y] == 1 && p[x][y - 1] == 1) {
            nice = false;
        }
        if (nice) {
            rec(filled + 1);
        }
    }
    if (s[x][y] == 'D') {
        p[x][y] = 2;
        nice = true;
        if (x > 0 && y > 0 && p[x - 1][y - 1] == 2 && p[x - 1][y] == 2 && p[x][y - 1] == 2) {
            nice = false;
        }
        if (nice) {
            rec(filled + 1);
        }
    }
    if (s[x][y] == 'U') {
        p[x][y] = 1;
        nice = true;
        if (x > 0 && y > 0 && p[x - 1][y - 1] == 1 && p[x - 1][y] == 1 && p[x][y - 1] == 1) {
            nice = false;
        }
        if (nice) {
            rec(filled + 1);
        }
        p[x][y] = 2;
        nice = true;
        if (x > 0 && y > 0 && p[x - 1][y - 1] == 2 && p[x - 1][y] == 2 && p[x][y - 1] == 2) {
            nice = false;
        }
        if (nice) {
            rec(filled + 1);
        }
    }
}
    
void trivial() {
    precalc();
    rec(0);
    cout << res << endl;
}
    
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    trivial();
    return 0;
    int u = 0, v = 1;
    memset(d[u], 0, sizeof(d[u]));
    vector < int > start(n + 1, -1);
    start[n] = 1;
    compress(&start);
    d[u][0][1][M[start]] = 1;
    d[u][(1 << n)][0][M[start]] = 1;
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j, swap(u, v)) {
            memset(d[v], 0, sizeof(d[v]));
            for (int mask = 0; mask < (1 << (m + 1)); ++mask) {
                for (int T = 0; T <= (i + 1) * n; ++T) {
                    for (int c_mask = 0; c_mask < M_size; ++c_mask) {
                        if (d[u][mask][T][c_mask] == 0) {
                            continue;
                        }
    
                        if (j == 0) {
                            // marking Tom's cell
                            {
                                int color0 = (bool)(mask & 1);
                                int comp0 = revM[c_mask][0];
    
                                int colorN = 0;
                                int compN = -1;
    
                                if (comp0 == -1) {
                                    compN = unusedM[c_mask];
                                } else {
                                    if (color0 == 0) {
                                        compN = comp0;
                                    } else {
                                        compN = unusedM[c_mask];
                                    }
                                }
    
    
                            }
    
                            // marking Derpina's cell
                            {
                            }
                        }
    
    
                        if (j != 0) {
                            // marking Tom's cell
                            {
    
                            }
    
                            // marking Derpina's cell
                            {
                            }
                        }
                    }
                }
            }
        }
    }
    
    long long res = 0;
    for (int mask = 0; mask < (1 << (m + 1)); ++mask) {
        for (int j = 0; j <= n * m; ++j) {
            for (int c_mask = 0; c_mask < M_size; ++c_mask) {
                if (abs(2 * j - (n * m)) > k) {
                    continue;
                }
    
                bool nice = false;
                if (mask == 0 && compress(&revM[c_mask]) == 1) {
                    nice = true;
                }
                if (mask == (1 << (m + 1)) - 1 && compress(&revM[c_mask]) == 1) {
                    nice = true;
                }
                if (0 < mask && mask < (1 << (m + 1)) - 1 && compress(&revM[c_mask]) == 2) {
                    nice = true;
                }
                if (nice) {
                    res += d[u][mask][j][c_mask];
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
