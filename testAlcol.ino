#define valoreNormale 90   
#define valoreElevato 300  
#define MQ3pin 0            // Pin A0, analogico 0
                            //                            0
                            //                     ---------------   
                            //                     |   |    |    | 
                            // sul sensore MQ-3   vcc gnd   nc  data
 
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
		if (misuraCampione >= valoreNormale && misuraCampione < valoreElevato) { Serial.println("  |  Stato: elevato"); } 
		else { Serial.println("  |  Stato: eccessivo");	}
	
	delay(2000); 
}
