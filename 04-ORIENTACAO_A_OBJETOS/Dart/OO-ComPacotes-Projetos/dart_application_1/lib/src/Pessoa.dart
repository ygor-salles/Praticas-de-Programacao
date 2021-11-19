import 'Humano.dart';

class Pessoa extends Humano {
  String nome;
  int idade;
  String sexo;

  Pessoa({required this.nome, required this.idade, required this.sexo});

  double imc() => peso / (altura * altura);

  bool isMaiorDeIdade() => idade >= 18;
}
