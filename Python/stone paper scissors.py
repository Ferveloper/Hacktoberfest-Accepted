import random,playsound
# def winning_music():
#     playsound.playsound("Lean On")



lst=[1,2,3]
i=0
you=0
comp=0
while(i<10):
    choice=random.choice(lst)
    print(f"Choose 1.Stone 2.Paper 3.Scissors")
    # print(choice)
    user=int(input())
    if user==choice:
        print("game tie")
        i = i + 1
    elif ((user==1 and choice==2) or (user==2 and choice==3) or (user==3 and choice==1)):
        print("You lost")
        comp+=1
        i=i+1

    elif ((user == 1 and choice == 3) or (user==3 and choice==2) or (user==2 and choice==1)):
        print("You win")
        you+=1
        i = i + 1

print("You:",you)
print("Comp:",comp)
# winning_music()