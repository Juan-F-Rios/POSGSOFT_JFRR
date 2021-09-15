#ProyectoPOO

#Descripción general

Este proyecto buscaba a través del uso de elementos trabajados en clase desarrollar un sistema de información para facilitar la calificación de trabajos de grado. Este proyecto debía contar con varias funcionalidades para distintos usuarios, es decir, el asistente de posgrado debe ser capaz de crear actas y ver los históricos, el jurado debe ser capaz de ingresar las notas, hacer observaciones y exportar el acta, por último la directora debe ser capaz de modificar los criterios y ver los históricos. el Acta y los criterios tienen unos datos específicos que son ingresados cuando se crean.

#Principales funcionalidades

La aplicación desarrollada cuenta con un menu principal que deja al usuario elegir el cargo que ocupa(asistente, jurado o director) luego de elegir el cargo le plantea opciones según el cargo.

El asistente cuenta con las opciones de:

crear acta: esta opción permite crear el acta recibiendo los datos como el nombre del estudiante, nombre del trabajo, tipo de trabajo, nombre del director y de los jurados. 

ver historicos: esta opción permite ver la información de las actas, los datos de los criterios, las notas y las observaciones asignadas por los jurados y si el trabajo fue aprobado o rechazado.

El director cuenta con las opciones de:

modificar criterios: los criterios son creados usando el constructor con un texto genérico y el mismo porcentaje todos, esta opción deja cambiar la descripción de cada criterio así como su valor porcentual.

ver historicos: esta opción permite ver la información de las actas, los datos de los criterios, las notas y las observaciones asignadas por los jurados y si el trabajo fue aprobado o rechazado.

El jurado cuenta con las opciones de:

evaluar los trabajos: esta opción permite evaluar cada criterio, un solo jurado ingresa las dos notas y a partir de estas se calcula la nota de cada criterio y la nota final

exportar acta: le permite al jurado exportar la información del trabajo a un archivo de texto luego de calcular la nota final.


link del diagrama UML(https://drive.google.com/file/d/1JrokB2jxXwak44PNxZH-4YwwM4V79bh6/view?usp=sharing)
