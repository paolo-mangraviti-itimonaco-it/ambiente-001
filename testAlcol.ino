#define valoreNormale 90   
#define valoreElevato 300  
#define MQ3pin 0
 
float misuraCampione;  
 
void setup() {
	Serial.begin(9600); 
	Serial.println("Riscaldamento del sensore MQ3");
	delay(20000); 
}
 
void loop() {
	misuraCampione = analogRead(MQ3pin); 
 
	Serial.print("Valore rilevato: "); Serial.print(misuraCampione);
	
	if (misuraCampione < valoreNormale) {	Serial.println("  |  Stato: normale"); } 
  else 
    if (campimisuraCampioneone >= valoreNormale && misuraCampione < valoreElevato) { Serial.println("  |  Stato: elevato"); } 
    else { Serial.println("  |  Stato: eccessivo");	}
 
	delay(2000); 
}