/*
11 - imprimir o cabeçalho definido em uma função
Curso: Sisitemas de Informacao
Disciplina: Fundamentos de Progaramacao
Universidade federal de Itajuba - Unifei

e retornar em uma nova função o  conceito conforme a media do aluno que serão digitadas pelo usuário.
Segue a tabela abaixo:


    NOTA            CONCEITO
de 0,0 a 4,9            D
de 5,0 a 6,9            C
de 7,0 a 8,9            B
de 9,0 a 10,0           A
 */

function imprima() {
    console.log('Curso: Sisitemas de Informacao')
    console.log('Disciplina: Fundamentos de Progaramacao')
    console.log('Universidade federal de Itajuba - Unifei')
}

function conceito(nota: number): string {
    if ((nota >= 0) && (nota <= 4.9))
        return 'D'
    else if ((nota >= 5) && (nota <= 6.9))
        return 'C'
    else if ((nota >= 7) && (nota <= 8.9))
        return 'B'
    else if ((nota >= 9) && (nota <= 10))
        return 'A'
    return ''
}

//FUNÇÃO PRINCIPAL
imprima()
let nota = 6
if (nota >= 0 && nota <= 10)
    console.log('\nO conceito é: ', conceito(nota))
else
    console.log('\nDIgite uma nota válida!')
