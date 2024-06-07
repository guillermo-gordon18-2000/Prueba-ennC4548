
<!-- Mejora de compatibilidad del enlace de vuelta al inicio: Ver: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a name="readme-top"></a>
<!--
*** ¡Gracias por revisar la mejor plantilla de README! Si tienes una sugerencia
*** que podría mejorar esto, por favor haz un fork del repositorio y crea un pull request
*** o simplemente abre un issue con la etiqueta "enhancement".
*** ¡No olvides darle una estrella al proyecto!
*** ¡Gracias de nuevo! Ahora ve y crea algo ASOMBROSO! :D
-->



<!-- INSIGNIAS DEL PROYECTO -->
<!--
*** Estoy usando enlaces de estilo "referencia" en markdown para mayor legibilidad.
*** Los enlaces de referencia están encerrados entre corchetes [ ] en lugar de paréntesis ( ).
*** Ver la parte inferior de este documento para la declaración de las variables de referencia
*** para contributors-url, forks-url, etc. Esta es una sintaxis opcional y concisa que puedes usar.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
 <p align="center">
    <a>
      <img src="https://img.shields.io/badge/firebase-a08021?style=for-the-badge&logo=firebase&logoColor=ffcd34"/>
    </a>
    <a>
      <img src="https://img.shields.io/badge/sponsor-30363D?style=for-the-badge&logo=GitHub-Sponsors&logoColor=#EA4AAA"/>
    </a>
    <a>
      <img src="https://img.shields.io/badge/NeoVim-%2357A143.svg?&style=for-the-badge&logo=neovim&logoColor=white"/>
    </a>

   <a>
      <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
    </a>
      <a>
      <img src="https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white"/>
    </a>
  </p>



<!-- LOGO DEL PROYECTO -->
<br />
<div align="center">
  <a href="https://github.com/guillermo-gordon18-2000/infija-a-postfija">
    <img src="https://github.com/guillermo-gordon18-2000/SIMULADOR-JUEGO-AZAR/assets/83618044/d45131a0-7eb7-4414-a707-03d9ddf422f7" alt="Logo" width="80" height="80">
</a>

  <h3 align="center">SIMULACION DEL JUEGO PAR Y NOM</h3>

  <p align="center">
    Juego de dados al azar el jugador coloca las cantidad de veces que desea jugar 
    <br />
    <a href="https://github.com/tu_usuario/tu_repositorio"><strong>Explora la documentación »</strong></a>
    <br />
    <br />
    <a href="https://github.com/tu_usuario/tu_repositorio">Ver Demo</a>
    ·
    <a href="https://github.com/tu_usuario/tu_repositorio/issues/new?labels=bug&template=bug-report---.md">Reportar Bug</a>
    ·
    <a href="https://github.com/tu_usuario/tu_repositorio/issues/new?labels=enhancement&template=feature-request---.md">Solicitar Funcionalidad</a>
  </p>
</div>



<!-- TABLA DE CONTENIDOS -->
<details>
  <summary>Tabla de Contenidos</summary>
  <ol>
    <li>
      <a href="#sobre-el-proyecto">Sobre el Proyecto</a>
      <ul>
        <li><a href="#características-del-proyecto">Características del Proyecto</a></li>
      </ul>
    </li>
    <li>
      <a href="#requisitos">Requisitos</a>
    </li>
    <li>
      <a href="#instrucciones-de-compilación-y-ejecución">Instrucciones de Compilación y Ejecución</a>
      <ul>
        <li><a href="#clonar-el-repositorio">Clonar el Repositorio</a></li>
        <li><a href="#compilar-el-programa">Compilar el Programa</a></li>
        <li><a href="#ejecutar-el-programa">Ejecutar el Programa</a></li>
        <li><a href="#ingresar-cualquier-opción">Ingresar cualquier opción</a></li>
      </ul>
    </li>
    <li><a href="#contribuyendo">Contribuyendo</a></li>
    <li><a href="#licencia">Licencia</a></li>
    <li><a href="#contacto">Contacto</a></li>
    <li><a href="#reconocimientos">Reconocimientos</a></li>
  </ol>
</details>


<!-- SOBRE EL PROYECTO -->
## Sobre el Proyecto

### Características del Proyecto:
* **Presentación del Proyecto:** Muestra información detallada sobre la universidad, facultad, carrera, proyecto, integrantes y profesora.
* **Instrucciones del Juego:** Explica de manera clara y detallada las reglas y mecánicas del juego "PAR Y NOM".
* **Generación de Números Aleatorios:** Utiliza la función `rand()` para generar números aleatorios en el rango de 1 a 100, representando el lanzamiento de dados.
* **Lógica del Juego "PAR Y NOM":** Implementa la lógica del juego donde el usuario predice si la suma de dos dados será par o impar, ganando puntos según su acierto.
* **Sistema de Puntuación:** Lleva un registro de los puntos del usuario y de la máquina, determinando el ganador al final de las rondas.
* **Interfaz Interactiva:** Utiliza la consola para interactuar con el usuario, mostrando mensajes y esperando entradas para continuar.
* **Menú Principal:** Proporciona un menú con opciones para ver la presentación, leer las instrucciones, jugar o salir del programa.
* **Despedida:** Muestra un mensaje de agradecimiento cuando el usuario decide salir del juego.


<p align="right">(<a href="#readme-top">volver al inicio</a>)</p>

El código define varias funciones y estructuras de datos para manejar la pila y la lista utilizadas en la conversión. Las funciones principales incluyen:

- `void Presentacion()`: Muestra información de presentación del proyecto y solicita al usuario que presione una tecla para continuar.
- `void Intrucciones()`: Muestra las instrucciones del juego al usuario y solicita que presione una tecla para continuar.
- `int random(int d)`: Genera un número aleatorio entre 1 y 100.
- `void Juego()`:Gestiona la lógica del juego "PAR Y NOM", donde los jugadores predicen si la suma de dos dados es par o impar.
- `int Salir()`:Agradece al usuario por jugar y devuelve un valor para salir del bucle del menú.
- `void Menu()`: Muestra el menú principal del juego y permite al usuario seleccionar diferentes opciones.
- `main`: Inicia el programa ejecutando la función Menu.


## Requisitos

- **Compilador:** g++ (GNU Compiler Collection) o cualquier compilador de C++ compatible.
- **Versión de C++:** Se recomienda usar C++11 o superior.

## Instrucciones de Compilación y Ejecución

1. **Clonar el repositorio:**

   ```sh
   git https://github.com/guillermo-gordon18-2000/SIMULADOR-JUEGO-AZAR.git
   cd SIMULADOR-JUEGO-AZAR

2. Compilar el programa:
    ```sh
      g++ PROY_5.CPP -o Executable

3. Ejecutar el programa:
   ```sh
   ./Executable

4. Ingresar cualquiera de las opciones :

Cuando el menu aya cargado digite la opcion que decea 

    
 
      1. Hoja de presentacion
      2. Instrucciones
      3. Juego
      4. Salir  


## Licencia

Distribuido bajo la Licencia MIT. Ver `LICENSE.txt` para más información.

<p align="right">(<a href="#readme-top">volver al inicio</a>)</p>

## Contacto

Guillermo Gordon - [@tu_usuario](https://twitter.com/tu_usuario) - tu_correo@example.com

Enlace del Proyecto: [https://github.com/tu_usuario/tu_repositorio](https://github.com/tu_usuario/tu_repositorio)

<p align="right">(<a href="#readme-top">volver al inicio</a>)</p>

## Reconocimientos

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

<p align="right">(<a href="#readme-top">volver al inicio</a>)</p>

