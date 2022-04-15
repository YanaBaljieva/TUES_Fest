unsigned int count = 0;
void setup() {
  for(int i = 2; i <= 13; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
   for(int i = 25; i <= 53; i++){
    if(i == 25 || i == 28 ||
      i == 29 || i == 27 || i == 30 || 
      i == 31 || i == 33 || i == 35 || 
      i == 36 || i == 37 || i == 38 || 
      i == 39 || i == 40 || i == 41 || 
      i == 43 || i == 45 || i == 23 ||
      i == 47 || i == 49 || i == 51 ||
      i == 53){
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
      }
    }
}

void loop() {
 
   delay(5000);
  if(count == 0){
   char arr[] = "TUES Fest\n";  //INPUT YOUR TEXT HERE 
   for(int i = 0; arr[i] != '\0'; i++){
      switch(arr[i]){
       case 'a': 
        digitalWrite(9, HIGH);
        delay(300);
        digitalWrite(9, LOW);
        delay(300);
        break;
       case 'b': 
        digitalWrite(2, HIGH);
        delay(300);
        digitalWrite(2, LOW);
        delay(300);
        break;
       case 'c': 
        digitalWrite(36, HIGH);
        delay(300);
        digitalWrite(36, LOW);
        delay(300);
        break;
       case 'd': 
        digitalWrite(12, HIGH);
        delay(300);
        digitalWrite(12, LOW);
        delay(300);
        break;
       case 'e': 
        digitalWrite(28, HIGH);
        delay(300);
        digitalWrite(28, LOW);
        delay(300);
        break;
       case 'f': 
        digitalWrite(39, HIGH);
        delay(300);
        digitalWrite(39, LOW);
        delay(300);
        break;
       case 'g': 
        digitalWrite(25, HIGH);
        delay(300);
        digitalWrite(25, LOW);
        delay(300);
        break;
       case 'h': 
        digitalWrite(41, HIGH);
        delay(300);
        digitalWrite(41, LOW);
        delay(300);
        break;
       case 'i': 
        digitalWrite(5, HIGH);
        delay(300);
        digitalWrite(5, LOW);
        delay(300);
        break;
       case 'j': 
        digitalWrite(4, HIGH);
        delay(300);
        digitalWrite(4, LOW);
        delay(300);
        break;
       case 'k': 
        digitalWrite(8, HIGH);
        delay(300);
        digitalWrite(8, LOW);
        delay(300);
        break;
       case 'l':
        digitalWrite(47, HIGH);
        delay(300);
        digitalWrite(47, LOW);
        delay(300);
        break;
       case 'm': 
        digitalWrite(51, HIGH);
        delay(300);
        digitalWrite(51, LOW);
        delay(300);
        break;
       case 'n': 
        digitalWrite(7, HIGH);
        delay(300);
        digitalWrite(7, LOW);
        delay(300);
        break;
       case 'o': 
        digitalWrite(49, HIGH);
        delay(300);
        digitalWrite(49, LOW);
        delay(300);
        break;
       case 'p': 
        digitalWrite(43, HIGH);
        delay(300);
        digitalWrite(43, LOW);
        delay(300);
        break;
       case 'q': 
        digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(13, LOW);
        delay(300);
        break;
       case 'r': 
        digitalWrite(11, HIGH);
        delay(300);
        digitalWrite(11, LOW);
        delay(300);
        break;
       case 's': 
        digitalWrite(38, HIGH);
        delay(300);
        digitalWrite(38, LOW);
        delay(300);
        break;
       case 't': 
        digitalWrite(29, HIGH);
        delay(300);
        digitalWrite(29, LOW);
        delay(300);
        break;
       case 'u': 
        digitalWrite(6, HIGH);
        delay(300);
        digitalWrite(6, LOW);
        delay(300);
        break;
       case 'v': 
        digitalWrite(31, HIGH);
        delay(300);
        digitalWrite(31, LOW);
        delay(300);
        break;
       case 'w': 
        digitalWrite(33, HIGH);
        delay(300);
        digitalWrite(33, LOW);
        delay(300);
        break;
       case 'x': 
        digitalWrite(35, HIGH);
        delay(300);
        digitalWrite(35, LOW);
        delay(300);
        break;
       case 'y': 
        digitalWrite(3, HIGH);
        delay(300);
        digitalWrite(3, LOW);
        delay(300);
        break;
       case 'z': 
        digitalWrite(27, HIGH);
        delay(300);
        digitalWrite(27, LOW);
        delay(300);
        break;
       case '.': 
        digitalWrite(37, HIGH);
        delay(300);
        digitalWrite(37, LOW);
        delay(300);
        break;
       case ',': 
        digitalWrite(53, HIGH);
        delay(300);
        digitalWrite(53, LOW);
        delay(300);
        break;
       case '\n': 
        digitalWrite(45, HIGH);
        delay(300);
        digitalWrite(45, LOW);
        delay(300);
        break;
       case ' ': 
        digitalWrite(10, HIGH);
        delay(300);
        digitalWrite(10, LOW);
        delay(300);
        break;
       case 'A': 
        digitalWrite(23, HIGH);
        delay(300);
        digitalWrite(9, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(9, LOW);
        delay(300);
        break;
       case 'B': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(2, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(2, LOW); 
        delay(300);
        break;
       case 'C': 
        digitalWrite(23, HIGH);
        delay(300);
        digitalWrite(36, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(36, LOW); 
        delay(300);
        break;
       case 'D': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(12, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(12, LOW); 
        delay(300);
        break;
       case 'E': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(28, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(28, LOW); 
        delay(300);
        break;
       case 'F': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(39, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(39, LOW); 
        delay(300);
        break;
       case 'G': 
        digitalWrite(23, HIGH);
        delay(300);
        digitalWrite(25, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(25, LOW); 
        delay(300);
        break;
       case 'H': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(41, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(41, LOW); 
        delay(300);
        break;
       case 'I': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(5, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(5, LOW); 
        delay(300);
        break;
       case 'J': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(4, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(4, LOW); 
        delay(300);
        break;
       case 'K': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(8, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(8, LOW); 
        delay(300);
        break;
       case 'L': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(47, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(47, LOW); 
        delay(300);
        break;
       case 'M': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(51, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(51, LOW); 
        delay(300);
        break;
       case 'N': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(7, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(7, LOW); 
        delay(300);
        break;
       case 'O': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(49, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(49, LOW); 
        delay(300);
        break;
       case 'P': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(43, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(43, LOW); 
        delay(300);
        break;
       case 'Q': 
        digitalWrite(23, HIGH);
        delay(300);
        digitalWrite(13, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(13, LOW); 
        delay(300);
        break;
       case 'R': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(11, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(11, LOW); 
        delay(300);
        break;
       case 'S': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(38, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(38, LOW); 
        delay(300);
        break;
       case 'T': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(29, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(29, LOW); 
        delay(300);
        break;
       case 'U': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(6, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(6, LOW); 
        delay(300);
        break;
       case 'V': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(31, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(31, LOW); 
        delay(300);
        break;
       case 'W': 
        digitalWrite(23, HIGH); 
        delay(300);
        digitalWrite(33, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(33, LOW); 
        delay(300);
        break;
       case 'X': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(35, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(35, LOW); 
        delay(300);
        break;
       case 'Y': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(3, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(3, LOW); 
        delay(300);
        break;
       case 'Z': 
        digitalWrite(23, HIGH);
        delay(300); 
        digitalWrite(27, HIGH); 
        delay(300);
        digitalWrite(23, LOW); 
        digitalWrite(27, LOW); 
        delay(300);
        break;
       default:
        digitalWrite(32, HIGH);  //space as default
        delay(300);
        digitalWrite(32, LOW);
        delay(300);
        break;
       
      }
   }
   count++;
  }
}
