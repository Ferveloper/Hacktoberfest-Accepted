function getComputer() {
    const com = Math.random()

    if (com < 0.34) return 'rock'
    if (com >= 0.34 && com <= 0.37) return 'scissors'
    return 'paper'
}

function getInfo(player, com) {

    if (player == com) return 'DRAW'
    if (player == 'scissors') return (com == 'rock') ? 'LOSE' : 'WIN'
    if (player == 'paper') return (com == 'rock') ? 'WIN' : 'LOSE'
    if (player == 'rock') return (com == 'scissors') ? 'WIN' : 'LOSE'
}

// let getPlayer = document.querySelectorAll('#player a img')
// getPlayer.forEach((play) => {
//     getPlayer = addEventListener('click', () => {
//         const com = getComputer()
//         const player = play.className.split(' ')[0]
//         const info = getInfo(player, com)

//         const imgComputer = document.querySelector('#com img')
//         imgComputer.setAttribute('src', '../img/' + com + '.png')

//         const result = document.querySelector('div .info')
//         result.innerHTML = info

//         console.log('com ' + com)
//         console.log('player ' + player)
//         console.log('info ' + info)
//     })
// })


const rock = document.querySelector('#player a:nth-child(1)')
rock.addEventListener('click', () => {
    const com = getComputer()
    const player = rock.value="rock"
    const info = getInfo(player, com)

    const imgComputer = document.querySelector('#com img')
    imgComputer.setAttribute('src', '../img/' + com + '.png')

    const result = document.querySelector('div .info')
    result.innerHTML = info
})

const paper = document.querySelector('#player  a:nth-child(2)')
paper.addEventListener('click', () => {
    const com = getComputer()
    const player = paper.value="paper"
    const info = getInfo(player, com)

    const imgComputer = document.querySelector('#com img')
    imgComputer.setAttribute('src', '../img/' + com + '.png')

    const result = document.querySelector('div .info')
    result.innerHTML = info
})

const scissors = document.querySelector('#player a:nth-child(3)')
scissors.addEventListener('click', () => {
    const com = getComputer()
    const player = scissors.value="scissors"
    const info = getInfo(player, com)

    const imgComputer = document.querySelector('#com img')
    imgComputer.setAttribute('src', '../img/' + com + '.png')

    const result = document.querySelector('div .info')
    result.innerHTML = info
})
