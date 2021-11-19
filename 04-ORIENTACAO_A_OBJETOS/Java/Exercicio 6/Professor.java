
public class Professor extends Pessoa {
    double salario;
    
    Professor(String nome, String cpf, double salario){
        super(nome, cpf);
        this.salario = salario;
    }
    
    double atribuiNota(double nota){
        return nota;
    }
    
    double reajustaSalario(){
        return this.salario + (this.salario*0.05);
    }
    
    void mostraAtributos(){
        System.out.println("Professor: "+super.nome+". CPF: "
                +super.cpf+". Salário: $"+this.salario);
    }
}
