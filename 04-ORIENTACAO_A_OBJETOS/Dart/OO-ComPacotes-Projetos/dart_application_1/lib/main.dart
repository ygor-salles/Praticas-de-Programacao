import 'src/Pessoa.dart';

void main(List<String> arguments) {
  var pessoa = Pessoa(nome: 'Jacob', idade: 20, sexo: 'M');
  print(pessoa.nome);
  print(pessoa.idade);
  print(pessoa.sexo);

  pessoa.peso = 20;
  pessoa.altura = 1.75;
  print(pessoa.peso);
  print(pessoa.altura);

  print(
      '\nO imc do ${pessoa.nome} é ${pessoa.imc().toStringAsFixed(2)}. ${pessoa.nome} ${pessoa.isMaiorDeIdade() ? "é maior de idade" : "não é maior de idade"}\n');
}
