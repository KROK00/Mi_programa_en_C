#include <iostream>

int main()
{
  int area;
  int largo;
  int ancho;
  printf("Largo: ");
  scanf("%i", &largo);
  printf("Ancho: ");
  scanf("%d", &ancho);
  area = ancho * largo;
  printf("El cuadro de %-10i x %-10i tiene area de %-10i",ancho,largo, area);
}
