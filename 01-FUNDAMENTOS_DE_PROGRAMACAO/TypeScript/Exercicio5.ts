/*
5 - A partir de valores digitados pelo usuário, das notas b1 e b2 de um aluno, informar se ele
foi aprovado (media > = 6), reprovado (media < 3), ou se ficou de exame (3<=media<6). Se
ficou de exame, solicitar a nota do exame ex e informar se o aluno foi aprovado ou
reprovado.
*/

const b1 = 4
const b2 = 6

const media = (b1 + b2) / 2
if (media >= 6)
    console.log('Aprovado')
else if (media < 3)
    console.log('Reprovado')
else {
    console.log('Ficou de exame')
    const exame = 6.5
    if (exame >= 6)
        console.log('Aprovado')
}
