# AppCitas-Final
 Implementación de teoría de grafos y estructuras de datos a caso de aplicación de citas usando algoritmo de emparejamiento para procesar un conjunto de perfiles

## Autor:
Jacobo Giraldo<br>

# Explicación del codigo:
**Resumen del Código:**
 Este proyecto de aplicación de estructuras de datos en c++ aplica los principios estudiados para realizar una simulación del procesamiento de perfiles<br>
en un app de citas, aplicando un algoritmo de emparejamiento para encontrar para cada perfil la persona más compatible en la misma base de datos.<br>
Los cálculos de compatibilidad se realizaron a partir de representaciones vectoriales de las características de cada individuo, a las que se llegó a partir<br>
de computar sus gustos en base a la base de datos de gustos e intereses y la forma en que estos típicamente impactan la personalidad del individuo<br>

## Estructura de archivos

	**/Raíz del repositorio**<br>
		**/.vscode**<br>
		*Archivos de configuración para compilación, ejecución y path management*

			launch.json<br>
			settings.json<br>
			tasks.json<br>

		**/controllers**<br>
		*Módulos para creación y manipulación de objetos*

			Algebra.h<br>
			Algebra.cpp<br>
			Controller.h<br>
			Controller.cpp<br>
			Generador.h<br>
			Generador.cpp<br>

		**/models**<br>
		*Módulos para estructuración y almacenamiento de datos*

			Arista.cpp<br>
			Arista.h<br>
			Grafo.cpp<br>
			Grafo.h<br>
			Perfil.cpp<br>
			Perfil.h<br>
			Gusto.h<br>

		**/sources**<br>
		*Archivos .json fuente para generación de perfiles*

			Nombres.json<br>
			Gustos.json<br>

		json.hpp: Librería para manipulación de .json<br>

		main.cpp: Entry point.<br>

# Uso:
Para usar este código: <br>
-1. Ejecutar build task por defecto ("C/C++: g++.exe build project" en tasks.json)<br>
-2. Ingresar por terminal el número (entero) de perfiles a generar para simulación<br>
Posteriormente se mostrará a través de la terminal la información de simulación <br>

# Descripción por módulo:
Para mayor información sobre la estructura y funcionamiento de cada módulo se recomienda revisar los comentarios que se<br>
pueden encontrar en cada archivo .h<br>
