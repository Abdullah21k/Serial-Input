// Arduino Café — our little restaurant
// Customers can order 3 items: Pizza, Pasta, or Burger

int pizza;   // A box to store pizza count/value
int pasta;   // A box to store pasta count/value
int burger;  // A box to store burger count/value

void setup() {
  // The café opens once when Arduino starts
  Serial.begin(9600); // Telephone line between Arduino and computer

  // Put the menu on the wall
  Serial.println("Welcome to Arduino Café!");
  Serial.println("1. Pizza");
  Serial.println("2. Pasta");
  Serial.println("3. Burger");
}

void loop() {
  // Waiter asks the customer what they want
  Serial.println("What would you like to order?");

  // Wait until the customer types something in Serial Monitor
  while (Serial.available() == 0) {
    // Just waiting here
  }

  // Write down the order as a number
  int menuChoice = Serial.parseInt();

  // Go to the right kitchen station depending on the order number
  switch (menuChoice) {
    case 1:  // If order is "1", serve Pizza
      Serial.print("Here is your Pizza. Count: ");
      Serial.println(pizza);
      break;

    case 2:  // If order is "2", serve Pasta
      Serial.print("Here is your Pasta. Count: ");
      Serial.println(pasta);
      break;

    case 3:  // If order is "3", serve Burger
      Serial.print("Here is your Burger. Count: ");
      Serial.println(burger);
      break;

    default:  // If the customer ordered something not on the menu
      Serial.println("Sorry, that’s not on the menu.");
  }
}
