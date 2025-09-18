#include <stdio.h>
int main(){
	int deviceType = 0;
	int symptom = 0;
	printf("Enter the device number for it's type: '1:Laptop', '2:Smartphone', '3:Router' \n");
	scanf("%d", &deviceType);
	switch(deviceType){
		case 1:
			printf("Enter the symptom the device is showing: '10:Won't turn on', '11:Overheating', '12:Slow Performance' \n");
			scanf("%d", &symptom);
			switch(symptom){
				case 10: 
					printf("Check power adapter and battery connections. Try a different power outlet. Removebattery and hold power button for 30 seconds. \n");
					break;
				case 11: 
					printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage. \n");
					break;
				case 12: 
					printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive. \n");
					break;
			}
			break;
		case 2:
			printf("Enter the symptom the device is showing: '20:Battery Drains Fast', '21:No Signal', '22:Touchscreen Unresponsive' \n");
			scanf("%d", &symptom);
			switch(symptom){
				case 20: 
					printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features. \n");
					break;
				case 21: 
					printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages. \n");
					break;
				case 22: 
					printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates. \n");
					break;
			}
			break;
		case 3:
			printf("Enter the symptom the device is showing: '30:No Internet Connection', '31:Wifi Signal Week', '32:Device Can not Connect' \n");
			scanf("%d", &symptom);
			switch(symptom){
				case 30: 
					printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription. \n");
					break;
				case 31: 
					printf("Reposition router and check antenna connections. Reduce interference from other evices. Change Wi-Fi channel. Consider range extender. \n");
					break;
				case 32: 
					printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts. \n");
					break;
			}
			break;	
		
	}


	//Q2
	
	




	return 0;
}
