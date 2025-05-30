# DOL
This project involves using a blutooth module to control a direct online system. 
Just completed my latest project: A smart Direct Online (DOL) motor starter using Arduino! Now I can control an industrial motor wirelessly via Bluetooth, monitor real-time status on an LCD, and ensure safety with relays, contactors, and overload protection. Check out how it works!

⚙️ What’s Inside:
✔ Arduino Uno – The brain of the system
✔ Relay Module – Switches the contactor safely
✔ Contactor & Overload Relay – Handles heavy motor current
✔ HC-05 Bluetooth Module – Wireless control from my phone
✔ 16x2 LCD – Shows motor status (ON/OFF/FAULT)
✔ Push Buttons – Manual Start/Stop option

🔧 How It Works:
1️⃣ Send a Bluetooth command (from a simple Android app) to start/stop the motor.
2️⃣ Arduino triggers the relay, which activates the contactor coil, powering the motor.
3️⃣ Overload protection kicks in if there’s excess current.
4️⃣ LCD displays real-time status (plus fault alerts if something goes wrong).
