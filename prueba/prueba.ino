int alumnos[10]={2,5,8,3,1,7,9,4,6,10};

void setup(){
  Serial.begin(9600);
  for(int i = 0; i<10;i++)
  {
    for(int j = i+1; j<10;j++){
  
  if(alumnos[i]>alumnos[j]){
     int aux = alumnos [i];
     alumnos[i]=alumnos[j];
     alumnos[j]=aux;
   
  }
    }
    Serial.println(alumnos[i]);
}
}
  

void loop(){
 
}
    
