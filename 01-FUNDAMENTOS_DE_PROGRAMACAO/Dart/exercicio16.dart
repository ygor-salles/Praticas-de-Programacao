// 16 - Escreva um programa que recebe uma cadeia de caracteres
// verifica se esta cadeia é um palíndromo. Uma palavra é dita ser
// palíndromo se a sequência de seus caracteres da esquerda para a direita
// é igual à sequência de seus caracteres da direita para a esquerda. Ex.: arara.

bool isPalindromo(String palavra) {
  for (int i = 0; i < palavra.length; i++) {
    if (palavra[i] != palavra[palavra.length - i - 1]) {
      return false;
    }
  }
  return true;
}

main(List<String> args) {
  String palavra = 'arara';
  if (isPalindromo(palavra))
    print('$palavra é palindromo!');
  else
    print('$palavra não é palindromo!');
}
