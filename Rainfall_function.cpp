#define ISCO_DATA_LENGTH 210
#define data_string 10
Double getRainfall(){
int comma = 0;
double rainfall = 0; 
char rainfall_number[data_string];
// change these random integers into Macros
for (int x = 0; x < ISCO_DATA_LENGTH; x++){
char
if (iscoData[x]==',')
{
      ++commaNumber1;

}
    if (commaNumber1 == y){
    double y = sprintf(rainfall_number, "%c%c%c%c", iscoData[x + 2], iscoData[x + 3], iscoData[x + 4], iscoData[x + 5]);
      bottleNumber = atoi(bottleNumChar);
      Serial.print("Next four characters are"); Serial.print(iscoData[x + 1]); 
      Serial.print(iscoData[x + 2]); Serial.print(iscoData[x + 3]); 
	Serial.println(iscoData[x + 4]);
      Serial.print("Water Level is ");
      return rainfall;
}
}
}
