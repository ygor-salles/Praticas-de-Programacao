class Documento {
    constructor(nome){
        this.nome = nome
    }
}

class Pdf extends Documento{
    visualizar(){
        return 'Mostra no Adobe Acrobat'
    }
}

class Word extends Documento{
    visualizar(){
        return 'Mostra no word'
    }
}

documentos = [new Pdf('PDF1'), new Word('DOC1'), new Pdf('PDF2')]
for(let i=0; i<documentos.length; i++)
    console.log(`${documentos[i].nome}: ${documentos[i].visualizar()}`)
