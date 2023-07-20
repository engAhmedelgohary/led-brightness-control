 int button1 = 10;
 int button2 = 11;
 int Led = 3;
int ledBrightness = 128;

void setup( ) {
pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(Led, OUTPUT);
}
void loop( ) {
if(digitalRead(button1) == LOW)  {
ledBrightness -=15;

}
else if(digitalRead(button2) == LOW)
{
ledBrightness+=15;
}
ledBrightness = constrain(ledBrightness, 
0, 255);
analogWrite(Led, ledBrightness);
delay(250);
}