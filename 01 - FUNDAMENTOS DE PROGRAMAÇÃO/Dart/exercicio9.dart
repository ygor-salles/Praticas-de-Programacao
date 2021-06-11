// 9 - Suponha que no ano N a população dos EUA seja maior que a brasileira. Sabendo-se que os
// Estados Unidos possuem um crescimento anual de 2% na sua população e que o Brasil tem
// crescimento anual de 4%, determine o ano em que as duas populações serão iguais (em
// quantidade)

main(List<String> args) {
  int ano = 2021;
  double bra = 210;
  double eua = 327.2;
  while (bra < eua) {
    eua = eua + (eua * 0.2);
    bra = bra + (bra * 0.4);
    ano++;
  }
  print('O ano que o Brasil ultrapassará o EUA em população será $ano');
  print(
      'População brsileira em $ano: ${bra.toStringAsFixed(2)} \nPopulação americana em $ano: ${eua.toStringAsFixed(2)}');
}
