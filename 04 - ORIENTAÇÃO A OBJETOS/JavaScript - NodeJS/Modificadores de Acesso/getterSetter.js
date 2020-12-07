/* Em javaScript não se utiliza todos os métodos convencionais de proteção como 
de outras linguagens, para proteger um atributo ou método deve-se inserir o underline
antes do atributo (conveção) e para acessar este valor deve utilizar o método get podendo
também modificar o atributo, para poder modificar através de um teste deve se usar o set
veja abaixo */

const sequencia = {
    _valor: 1, // convenção
    get valor() { return this._valor++ },
    set valor(valor) { 
        if(valor > this._valor) {
            this._valor = valor
        }
    }
}

console.log(sequencia.valor, sequencia.valor)
sequencia.valor = 1000
console.log(sequencia.valor, sequencia.valor)
sequencia.valor = 900
console.log(sequencia.valor, sequencia.valor)