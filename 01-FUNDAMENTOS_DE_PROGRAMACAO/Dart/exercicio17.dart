// 17 - Faça uma função para criptografar uma frase digitada pelo usuário.
// A criptografia deverá substituir todas as vogais por *.
// Utilize a função no programa principal. A frase poderá ter, no máximo, 50 caracteres.

import 'dart:io';

String criptografia(String frase) {
  frase = frase.replaceAll('a', '*');
  frase = frase.replaceAll('e', '*');
  frase = frase.replaceAll('i', '*');
  frase = frase.replaceAll('o', '*');
  frase = frase.replaceAll('u', '*');
  frase = frase.replaceAll('A', '*');
  frase = frase.replaceAll('E', '*');
  frase = frase.replaceAll('I', '*');
  frase = frase.replaceAll('O', '*');
  frase = frase.replaceAll('U', '*');
  return frase;
}

main(List<String> args) {
  print('Digite uma frase: ');
  String frase = stdin.readLineSync()!;
  String fraseCriptografada = criptografia(frase);
  print(fraseCriptografada);
}
