unsigned int count = 0;
void setup() {

  for(int i = 2; i <= 8; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);  
  }
  for(int i = 22; i <= 53; i++){
    if(i == 23 || i == 25 || i == 27 || 
        i == 29 || i == 31 || i == 33 || 
        i == 35 || i == 39){
          continue;
        }
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);  
  }
}

void loop() {

  delay(5000);
  if(count == 0){
   char arr[] = "TUES Fest\n";  //INPUT YOUR TEXT HERE 
   for(int i = 0; arr[i] != '\0'; i++){
      switch(arr[i]){
       case 'a': 
        digitalWrite(40, HIGH);
        delay(300);
        digitalWrite(40, LOW);
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
        digitalWrite(50, HIGH);
        delay(300);
        digitalWrite(50, LOW);
        delay(300);
        break;
       case 'e': 
        digitalWrite(28, HIGH);
        delay(300);
        digitalWrite(28, LOW);
        delay(300);
        break;
       case 'f': 
        digitalWrite(26, HIGH);
        delay(300);
        digitalWrite(26, LOW);
        delay(300);
        break;
       case 'g': 
        digitalWrite(22, HIGH);
        delay(300);
        digitalWrite(22, LOW);
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
        digitalWrite(48, HIGH);
        delay(300);
        digitalWrite(48, LOW);
        delay(300);
        break;
       case 'r': 
        digitalWrite(34, HIGH);
        delay(300);
        digitalWrite(34, LOW);
        delay(300);
        break;
       case 's': 
        digitalWrite(38, HIGH);
        delay(300);
        digitalWrite(38, LOW);
        delay(300);
        break;
       case 't': 
        digitalWrite(30, HIGH);
        delay(300);
        digitalWrite(30, LOW);
        delay(300);
        break;
       case 'u': 
        digitalWrite(6, HIGH);
        delay(300);
        digitalWrite(6, LOW);
        delay(300);
        break;
       case 'v': 
        digitalWrite(24, HIGH);
        delay(300);
        digitalWrite(24, LOW);
        delay(300);
        break;
       case 'w': 
        digitalWrite(42, HIGH);
        delay(300);
        digitalWrite(42, LOW);
        delay(300);
        break;
       case 'x': 
        digitalWrite(44, HIGH);
        delay(300);
        digitalWrite(44, LOW);
        delay(300);
        break;
       case 'y': 
        digitalWrite(3, HIGH);
        delay(300);
        digitalWrite(3, LOW);
        delay(300);
        break;
       case 'z': 
        digitalWrite(52, HIGH);
        delay(2000);
        digitalWrite(52, LOW);
        delay(2000);
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
        digitalWrite(32, HIGH);
        delay(300);
        digitalWrite(32, LOW);
        delay(300);
        break;
       case 'A': 
        digitalWrite(46, HIGH);
        delay(300);
        digitalWrite(40, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(40, LOW);
        delay(300);
        break;
       case 'B': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(2, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(2, LOW); 
        delay(300);
        break;
       case 'C': 
        digitalWrite(46, HIGH);
        delay(300);
        digitalWrite(36, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(36, LOW); 
        delay(300);
        break;
       case 'D': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(50, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(50, LOW); 
        delay(300);
        break;
       case 'E': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(28, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(28, LOW); 
        delay(300);
        break;
       case 'F': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(26, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(26, LOW); 
        delay(300);
        break;
       case 'G': 
        digitalWrite(46, HIGH);
        delay(300);
        digitalWrite(22, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(22, LOW); 
        delay(300);
        break;
       case 'H': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(41, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(41, LOW); 
        delay(300);
        break;
       case 'I': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(5, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(5, LOW); 
        delay(300);
        break;
       case 'J': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(4, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(4, LOW); 
        delay(300);
        break;
       case 'K': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(8, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(8, LOW); 
        delay(300);
        break;
       case 'L': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(47, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(47, LOW); 
        delay(300);
        break;
       case 'M': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(51, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(51, LOW); 
        delay(300);
        break;
       case 'N': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(7, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(7, LOW); 
        delay(300);
        break;
       case 'O': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(49, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(49, LOW); 
        delay(300);
        break;
       case 'P': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(43, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(43, LOW); 
        delay(300);
        break;
       case 'Q': 
        digitalWrite(46, HIGH);
        delay(300);
        digitalWrite(48, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(48, LOW); 
        delay(300);
        break;
       case 'R': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(34, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(34, LOW); 
        delay(300);
        break;
       case 'S': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(38, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(38, LOW); 
        delay(300);
        break;
       case 'T': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(30, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(30, LOW); 
        delay(300);
        break;
       case 'U': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(6, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(6, LOW); 
        delay(300);
        break;
       case 'V': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(24, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(24, LOW); 
        delay(300);
        break;
       case 'W': 
        digitalWrite(46, HIGH); 
        delay(300);
        digitalWrite(42, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(42, LOW); 
        delay(300);
        break;
       case 'X': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(44, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(44, LOW); 
        delay(300);
        break;
       case 'Y': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(3, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(3, LOW); 
        delay(300);
        break;
       case 'Z': 
        digitalWrite(46, HIGH);
        delay(300); 
        digitalWrite(52, HIGH); 
        delay(300);
        digitalWrite(46, LOW); 
        digitalWrite(52, LOW); 
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
