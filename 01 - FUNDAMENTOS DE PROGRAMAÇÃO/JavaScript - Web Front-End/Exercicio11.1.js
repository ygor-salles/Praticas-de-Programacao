function cabecalho() {
    const p = document.createElement('p')
    p.innerHTML = 'Curso: Sisitemas de Informacao <br> Disciplina: Fundamentos de Progaramacao \
        <br> Universidade federal de Itajuba - Unifei'

    const div = document.querySelector('#resultadoFinal')
    div.appendChild(p)
}

function resultadoConceito() {
    const nota = document.getElementById('nota').value
    if (nota >= 0 && nota <= 4.9)
        const conceito = 'D'
    else if (nota >= 5 && nota <= 6.9)
        const conceito = 'C'
    else if (nota >= 7 && nota <= 8.9)
        const conceito = 'B'
    else if (nota >= 9 && nota <= 10)
        const conceito = 'A'
    else
        const conceito = 'Deve ser digitado uma nota válida!'
    
    const p = document.createElement('p')
    p.innerHTML = conceito
    const div = document.querySelector('#resultadoFinal')
    div.appendChild(p)
} 

function main(){
    cabecalho(); resultadoConceito();
}