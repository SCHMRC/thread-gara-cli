<h1>Gara tra thread</h1>

<p>
  Scrivere un programma in C++ che utilizza la programmazione concorrente per simulare una gara tra due thread. Ogni thread stamperà in una riga separata della console una sequenza crescente di caratteri “0”, con un ritardo casuale per simulare la competizione.
</p>
<hr>





<ol>
<li>Utilizzare la libreria <thread> per gestire l'esecuzione parallela di due thread.</li>
<li> Utilizzare un vector<string> per memorizzare il pattern di crescita dei caratteri "0", partendo da "0" e raddoppiandone la lunghezza progressivamente.</li>
<li>Far avanzare i thread in parallelo, stampando ciascuno il pattern su righe diverse della console.</li>  
<li>Utilizzare le sequenze di escape ANSI (\033[<riga>;<colonna>H) per posizionare il cursore e scrivere su righe specifiche.</li>  
<li>Utilizzare flush per forzare l'output immediato e aggiornare la console in tempo reale.</li> 
<li>Inserire un ritardo casuale (usleep) per simulare il movimento asincrono dei due thread.</li>
<li>Stampare il messaggio "Gara conclusa!" in una riga dedicata dopo la terminazione di entrambi i thread.</li> 
</ol>
