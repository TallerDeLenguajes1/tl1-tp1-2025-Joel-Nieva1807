[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Respuestas del apartado 2:
_a)_ Investigar el archivo **.gitignore** ¿Por qué es conveniente incluirlo?
¿Cuándo se debe hacer?¿Cómo configuraría el archivo **.gitignore?**

## _ ¿Por qué es conveniente incluirlo?_
- Evitar archivos innecesarios en el repositorio: Sin un archivo .gitignore, Git rastrearía todos los archivos y carpetas dentro de tu proyecto, lo que podría incluir archivos temporales o generados automáticamente (por ejemplo, archivos de caché, logs, archivos de compilación, etc.). Esto haría que el repositorio sea más grande de lo necesario y más difícil de manejar.

- Proteger datos sensibles: En ocasiones, ciertos archivos contienen datos sensibles (como contraseñas, claves API, configuraciones locales o de bases de datos). Estos no deberían ser parte del control de versiones por razones de seguridad.

- Mejorar la colaboración en equipo: El archivo .gitignore ayuda a que todos los miembros del equipo trabajen de forma coherente al evitar que archivos de configuración locales, específicos de un entorno o generados automáticamente sean incluidos en el repositorio.

- Optimización de las operaciones de Git: Git no tiene que preocuparse por rastrear archivos que no son relevantes para el proyecto, lo que mejora la eficiencia en las operaciones de Git como git status, git diff, git add, entre otras.

## _¿Cuándo se debe hacer?_
Es recomendable agregar un archivo .gitignore al inicio del proyecto, antes de realizar cualquier commit. Esto es importante porque los archivos ignorados se pueden empezar a rastrear después de haber sido añadidos al repositorio, y para excluirlos se necesitan realizar pasos adicionales.

## _¿Como configuraria el archivo?_
* $ echo "*.exe" >> .gitignore // _ Este comando crea el archivo .gitignore, si no hubiera sido creado previamente y le añade el texto "*.exe" para ingorar todos los archivos de compilación con extención **.exe**. Múy útil cunado se programa. _

* $ git status // _para que me indique cual es archivo que no está rastreado, en este caso seria **.gitignore** ya que no había sido creado previamente. Por lo tanto es un archivo _untracked_ _

* $ git add .gitignore // _con esto, el archivo ya está siendo "rastreado"._
* $ git commit -m "nuevo commit" // _para confirmar los cambios agregados._

**Con esto sería sufieciente para ignorar todos los archivos .exe que nos arroja cuando programamos en c.**

## Respuestas desarrolladas a través de:
- [Git pro] (https://git-scm.com/book/es/v2)
- [Chat gpt] (https://openai.com/)



