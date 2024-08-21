#include <iostream>
using namespace std;
int main() {

  int matriz[3][3];
  int maior_soma = -9999;
  int linha_maior_soma = -9999;
  int soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "informe o item da posicao[" << i + 1 << "][" << j + 1 << "]:";
      cin >> matriz[i][j];
    }
  }
  cout << "\nMatriz:";
  for (int i = 0; i < 3; i++) {
    cout << "\n";
    for (int j = 0; j < 3; j++) {
      cout << matriz[i][j] << " ";
    }
  }
  cout << '\n';

  for (int i = 0; i < 3; i++) {
    soma = 0;
    for (int j = 0; j < 3; j++) {
      soma += matriz[i][j];
    }
    if (soma > maior_soma) {
      maior_soma = soma;
      linha_maior_soma = i;
    }
  }
  cout << "Soma:";
  cout << maior_soma << '\n';
  cout << "\nLinha de maior soma:" << matriz[linha_maior_soma][0] << " "
       << matriz[linha_maior_soma][1] << " " << matriz[linha_maior_soma][2];

return 0;
}