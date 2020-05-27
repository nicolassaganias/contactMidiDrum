# contactMidiDrum
4 micrófonos de contacto, que puedes adjuntar a cualquier superficie, que disparan samples en Ableton (o cualquier otro software)..

Para convertir los mensajes analógicos que entran a Arduino, en mensajes Midi que le llegan al Ableton, debo usar una aplicación
que sirce tanto para Windows como Mac o como Linux. Es una herramienta gratuita. En Mac, no debemos descargar otra aplicación
pero para Windows si, lo explico brevemente pero en esta página está toda la información y las descargas: 

https://projectgus.github.io/hairless-midiserial/

Arduino le escribe los datos analógicos captados por el piezo eléctrico al puerto serial (9600 baudios en este caso). 
Hairless recibe este serial y lo transforma en un mensaje midi.
Ableton lee este mensaje midi a través de un dispositivo virtual midi que deben crear (si es que no tienen creado un IAC driver)
Como crearlo? En Mac, vamos a Audio Midi Setup (está en Aplicaciones) y van a Window y seleccionan Midi, doble click a IAC driver,
y activar casilla "Device is online". https://help.ableton.com/hc/en-us/articles/209774225-How-to-setup-a-virtual-MIDI-bus
En PC vamos a necesitar de otra aplicacion: loopMIDI https://www.tobias-erichsen.de/software/loopmidi.html

(en la web de hairless que está en la línea numero 8 de este artículo está perfectamente explicado este proceso)

Bien, cuando tenemos todo instalado y configurado todo en los mismos canales, baudios, etc
conectamos el Arduino, y empezamos a pegarle a cuantos micrófonos de contacto hayamos puesto, asignamos desde Ableton el canal
para cada uno y listo!

Bueno, explico como hacer lo de Ableton:
Primero deben agregar el dispositivo midi virtual que hayan creado, sea por IAC Driver, loopMidi o cualquier otra. Para eso 
abrimos las preferencias del Ableton, vamos a Midi y activamos la casilla "Sync".
Creamos un canal MIDI y abrimos un Drumrack en él.
Luego tocamos el boton que dice MIDI arriba a la derecha o hacemos CMD + M en Mac para abrir el Midi Map Mode.
Clickeamos que cuerpo del Drumrack queremos asignar, y luego golpeamos el piezoeléctrico deseado. 
Verán que por defecto los primeros 4 piezoeléctricos son los primeros 4 cuerpos del Drumrack.

Ahora si, eso es todo.
Que vaya bien!
