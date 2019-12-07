Python 3.6.8 (default, Jan 14 2019, 11:02:34) 
[GCC 8.0.1 20180414 (experimental) [trunk revision 259383]] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> 
>>> v0 = 0 # sākotnēji bumba atrodas miera stāvoklī
>>> t = 0.1 # laiks no bumbas atlaišanas brīža ir tikai 0.1 sekunde
>>> y = v0*t - 0.5*g*t**2 # aprēķinātā bumbas pozīcija uz y ass
>>> print y # iegūstam rezultātu uz ekrāna
-0.049 # bumba ir nedaudz iemīcijusi zemi
>>> t = 1 # kas notiks pēc vienas sekundes?
>>> y = v0*t - 0.5*g*t**2
>>> print y
-4.905 # bumba ir stingri ieurbusies zemē
>>> # Jauns bumbas metiens
>>> v0 = 5 # bumba tiek pamesta gaisā ar ātrumu 5 m/s
>>> t = 0.7 # kas notiks pēc 0.7 sekundēm?
>>> y = v0*t - 0.5*g*t**2
>>> print y
1.09655 # bumba vēl nav nokritusi zemē (atrodas 1.1m augstumā)
>>>
