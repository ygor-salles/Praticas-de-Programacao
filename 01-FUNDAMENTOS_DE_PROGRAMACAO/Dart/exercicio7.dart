// 7 - Elabore um programa para calcular e escrever a seguinte soma:
//      37 * 38      36 * 37     35 * 36             1 * 2
// S = ---------- + --------- + ---------- + ..... + ------
//         1           2            3                   37

main(List<String> args) {
  int denominadorA = 37;
  int denominadorB = 38;
  double soma = 0;
  for (int i = 1; i <= 37; i++) {
    soma += ((denominadorA * denominadorB) / i);
    denominadorA--;
    denominadorB--;
  }
  print('A somatória é $soma');
}
