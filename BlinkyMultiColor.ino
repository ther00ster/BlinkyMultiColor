/*
 Name:		BlinkyMultiColor.ino
 Created:	10/1/2016 9:37:03 PM
 Author:	Tim
*/

const int PIN_LED_RED = 2;
const int PIN_LED_BLU = 3;
const int PIN_LED_GRN = 4;
const int PIN_LED_WHT = 5;
const int PIN_LED_PNK = 6;
const int PIN_LED_PPL = 7;
const int PIN_LED_ORG = 8;
const int PIN_LED_YLW = 9;

const int LED_DELAY_MAX = 500;

int _ledDelay = LED_DELAY_MAX;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);

	while (!Serial);

	pinMode(PIN_LED_RED, OUTPUT);
	pinMode(PIN_LED_BLU, OUTPUT);
	pinMode(PIN_LED_GRN, OUTPUT);
	pinMode(PIN_LED_WHT, OUTPUT);
	pinMode(PIN_LED_PNK, OUTPUT);
	pinMode(PIN_LED_PPL, OUTPUT);
	pinMode(PIN_LED_ORG, OUTPUT);
	pinMode(PIN_LED_YLW, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	Serial.print("\t_ledDelay: ");
	Serial.println(_ledDelay);
	Serial.println();

	digitalWrite(PIN_LED_RED, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_BLU, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_GRN, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_WHT, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_PNK, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_PPL, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_ORG, HIGH);
	delay(_ledDelay);
	digitalWrite(PIN_LED_YLW, HIGH);
	delay(_ledDelay);

	digitalWrite(PIN_LED_RED, LOW);
	digitalWrite(PIN_LED_BLU, LOW);
	digitalWrite(PIN_LED_GRN, LOW);
	digitalWrite(PIN_LED_WHT, LOW);
	digitalWrite(PIN_LED_PNK, LOW);
	digitalWrite(PIN_LED_PPL, LOW);
	digitalWrite(PIN_LED_ORG, LOW);
	digitalWrite(PIN_LED_YLW, LOW);

	_ledDelay -= 100;
	if (_ledDelay < 0)
		_ledDelay = 500;

	delay(LED_DELAY_MAX - _ledDelay + 100);
}
