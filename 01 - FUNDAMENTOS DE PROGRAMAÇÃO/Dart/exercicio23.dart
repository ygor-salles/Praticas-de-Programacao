// Crie um vetor com os seguintes nomes: ana, pedro, maria, fabio, josé.
// Remova o nome fabio do vetor e depois imprima novamente o vetor.

main(List<String> args) {
  var nomes = ['ana', 'pedro', 'maria', 'fabio', 'josé'];
  print(nomes);
  nomes.remove('fabio');
  print(nomes);
}
