#include "LiquidCrystal.h" // ajout de la librairie

// Vérifiez les broches !
//LiquidCrystal lcd(11,10,9,8,7,6,5,4,3,2); // liaison 8 bits de données
LiquidCrystal lcd(5,4,2,3,0,1); // liaison 4 bits de données

void setup()
{
   lcd.begin(20,2); // utilisation d'un écran 16 colonnes et 2 lignes
   lcd.write("HelloWorld"); // petit test pour vérifier que tout marche
}

void loop() {}
