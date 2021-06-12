// Crie um vetor com os seguintes nomes: ana, pedro, maria, fabio, josé.
// Remova o índice 3 do vetor e depois imprima novamente o vetor.

main(List<String> args) {
  List<String> nomes = ['ana', 'pedro', 'maria', 'fabio', 'josé'];
  print(nomes);
  nomes.removeAt(3);
  print(nomes);
}
