void setup()
{
    // 시리얼 통신 시작
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available() > 0)
    {
        String qrCode = Serial.readStringUntil('\n');

        Serial.println(qrCode);
    }
}
