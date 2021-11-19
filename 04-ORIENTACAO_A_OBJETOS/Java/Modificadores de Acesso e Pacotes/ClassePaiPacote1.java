
package pacote1;

/* A diferença entre Protected e Default é que 
Protected: só estará acessível para SUBCLASSES do mesmo pacote
Default: estará disponível para todas classes do mesmo pacote
*/ 

public class ClassePaiPacote1 {
    private int atributoPrivado=1;
    int atributoDefault=2;
    protected int atributoProtected=3;
    public int atributoPublico=4;
    
    //SOMENTE O METODO SET() PERMITE AS CLASSES FILHAS DO MESMO OU DE OUTROS PACOTES POSSAM ATRIBUIR UM VALOR AO ATRIBUTO PRIVADO
    public void setAtributoPrivado(int a){
        if(a>0)
            this.atributoPrivado = a;
    }
    
    //SOMENTE METODO GET() PERMITE AS CLASSES FILHAS DO MESMO OU DE OUTROS PACOTES TENHAM ACESSO AO ATRIBUTO PRIVADO
    public int getAtributoPrivado(){
        return this.atributoPrivado;
    }
    
    //SOMENTE COM  O METODO GET() PERMITE QUE A CLASSE FILHA DE OUTRO PACOTE TENHA ACESSO AO ATRIBUTO DEFAULT
    //O MESMO PARA O SET()
    public int getAtributoDefault(){
        return this.atributoDefault;
    }
    
    //SOMENTE COM  O METODO GET() PERMITE QUE A CLASSE FILHA DE OUTRO PACOTE TENHA ACESSO AO ATRIBUTO DEFAULT
    //O MESMO PARA O SET()
    public int getAtributoProtected(){
        return this.atributoProtected;
    }
}
