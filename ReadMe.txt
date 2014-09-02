========================================================================
    APLICACIÓN DE CONSOLA: vernam 
                           Información general del proyecto
========================================================================

AppWizard ha creado esta aplicación vernam.

Este archivo incluye un resumen acerca del contenido de los archivos que 
constituyen su aplicación vernam.


vernam.vcxproj
    Éste es el archivo de proyecto principal para los proyectos de VC++ 
    generados mediante un Asistente para aplicaciones.
    Contiene información acerca de la versión de Visual C++ con la que 
    se generó el archivo, así como información acerca de las plataformas, 
    configuraciones y características del proyecto seleccionadas en el 
    asistente para aplicaciones.

vernam.vcxproj.filters
    Éste es el archivo de filtros para los proyectos de VC++ generados 
    mediante un asistente para aplicaciones. 
    Contiene información acerca de la asociación entre los archivos de 
    un proyecto y los filtros. Esta asociación se usa en el IDE para mostrar 
    la agrupación de archivos con extensiones similares bajo un nodo 
    específico (por ejemplo, los archivos ".cpp" se asocian con el filtro
    "Archivos de código fuente").

vernam.cpp
    Ésta es la aplicación principal del archivo de código fuente.

/////////////////////////////////////////////////////////////////////////////
Otros archivos estándar:

StdAfx.h, StdAfx.cpp
    Estos archivos se utilizan para crear un archivo de encabezado precompilado 
    (PCH) denominado vernam.pch y un archivo de tipos 
    precompilado denominado StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Otras notas:

VERNAM 
(ONE -TIME PAD)
-TEXTO(mensaje)= Hola
.ascii
.binaria

H		O		L		A
30		40		15		65
001		0101	1010	0001


-CLAVE(K) secuencia aleatorio
string afl {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}

Z aleatorio de alf
1111 -> semilla


Semilla tamano 4

semilla 0101   --> tam 4
S5 =	S1	+	S0 mod 2 = 1
		1	+	0  mod 2 = 1

S6 =	S2	+	S1 mod 2 = ?
S7 =	S3	+	S2 mod 2 = ?
S8 =	S4	+	S3 mod 2 = ?
.
.
.
hasta el tamaño del mensaje()

Ascci
Binario

-CIFRADO: Ci = Mi + Ki mod 2(Z2) = {0,1}
es una cadena de string
-Descifrado Di = Ci + Ki mod 2


Suma en Z2 -> XOR
0	0 = 0
0	1 = 1
1	0 = 1
1	1 = 0

/////////////////////////////////////////////////////////////////////////////
