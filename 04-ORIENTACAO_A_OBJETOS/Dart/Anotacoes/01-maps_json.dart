// Acesso a documentos json

main(List<String> args) {
  var maps = {
    "nome": "Jacob Moura",
    "idade": 27,
    "cidade": "Maringa",
    "estado": "Paraná",
  };

  // Imprimindo apenas nome e idade
  print('${maps["nome"]} - ${maps["idade"]}');

  // Alterando o nome e a idade
  maps['nome'] = 'Caio Rubens';
  maps['idade'] = 30;

  print('${maps["nome"]} - ${maps["idade"]}');
}
