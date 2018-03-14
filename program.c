void lock(CAR, MUTEX) 
{do 
{         
if (pthread_mutex_lock(&MUTEX)) { 
printf("CAR %d is locked\n\n", CAR);     
} 
} while(0);
}
void unlock(CAR, MUTEX) 
{do 
{     
 if (pthread_mutex_unlock(&MUTEX)) { 
printf("CAR %d is unlocked\n\n", CAR);  
} 
} while(0);}
void intersection(){
	printf("------------Car is in Traffic Intersection------------\n\n");
}

