/*
    Code by : Projects_learner
    Project name : RTC using Ardino UNO
    Modified Date : 06-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-real-time-clock-rtc
*/

#include <RTClib.h>     // Include the RTClib library for DS3231
#include <LiquidCrystal.h>

// Define the LCD pin connections
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

RTC_DS3231 rtc;         // Create an instance of the RTC_DS3231 class

String getCurrentDateTime() {
  const char* dayInWords[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  const char* monthInWords[13] = {" ", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", 
                                   "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

  DateTime rtcTime = rtc.now();
  int ss = rtcTime.second();
  int mm = rtcTime.minute();
  int hh = rtcTime.twelveHour();
  int DD = rtcTime.dayOfTheWeek();
  int dd = rtcTime.day();
  int MM = rtcTime.month();
  int yyyy = rtcTime.year();

  String dateTime = "";
  // Format date in "dd-MMM-yyyy" and add day of the week
  dateTime += (dd < 10 ? "0" : "") + String(dd) + "-" + monthInWords[MM] + "-" + String(yyyy) + "  " + dayInWords[DD];

  // Format time in 12H format with AM/PM indication
  dateTime += "  ";
  dateTime += (hh < 10 ? "0" : "") + String(hh) + ":" + (mm < 10 ? "0" : "") + String(mm) + ":" + (ss < 10 ? "0" : "") + String(ss);
  dateTime += (rtcTime.isPM() ? " PM" : " AM");

  return dateTime;
}

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  
  // Initialize the RTC
  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  // Check if the RTC lost power and if so, set the time to the compile time
  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting time to compile time");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  // Initialize the LCD
  lcd.begin(16, 2);
}

void loop() {
  String dateTimeStr = getCurrentDateTime(); // Get current date and time
  lcd.clear(); // Clear the LCD display
  lcd.setCursor(0, 0);
  lcd.print(dateTimeStr); // Print current date and time
  delay(1000); // Delay for one second
}
