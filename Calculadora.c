#include <stdio.h> //biblioteca standard de C

//defino las variables

int main() {

  char operator; //almacena un caracter que me da el usuario
  double firstNumber, secondNumber; //utilizo double para incluir numeros decimales

  printf("Ingresa un operador ( +, -, *, /): ");
  scanf("%c", &operator); //almacena el operador - %c es de tipo char

  printf("Ingresa ambos operandos: ");
  scanf("%lf %lf", &firstNumber, &secondNumber); //le indico donde almacenar esos operandos

//utilizo un switch porque son varias operaciones
  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber + secondNumber);
      break;

    case '-':
      printf("%.1lf - %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber - secondNumber);
      break;

    case '*':
      printf("%.1lf * %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber * secondNumber);
      break;

    case '/':
      printf("%.1lf / %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber / secondNumber);
      break;

    default:
    printf("El operador no es correcto");

  }

}
