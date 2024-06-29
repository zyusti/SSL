|Linea|Lexema|Token|
| - | - | - |
||||
|16|int|palabraReservada|
|16|esNumero|identificador|
|16|(|carácterPuntuación|
|16|const|palabraReservada|
|16|char|palabraReservada|
|16|\*|operador|
|16|nro|identificador|
|16|)|carácterPuntuación|
|16|{|carácterPuntuación|
|17|int|palabraReservada|
|17|i|identificador|
|17|=|operador|
|17|0|constante|
|17|;|carácterPuntuación|
|19|while|palabraReservada|
|19|(|carácterPuntuación|
|19|nro|identificador|
|19|[|carácterPuntuación|
|19|i|identificador|
|19|]|carácterPuntuación|
|19|!=|operador|
|19|'\0'|constante|
|19|)|carácterPuntuación|
|19|{|carácterPuntuación|
|22|if|palabraReservada|
|22|(|carácterPuntuación|
|22|!|operador|
|22|isDigit|identificador|
|22|(|carácterPuntuación|
|22|nro|identificador|
|22|[|carácterPuntuación|
|22|i|identificador|
|22|]|carácterPuntuación|
|22|)|carácterPuntuación|
|22|)|carácterPuntuación|
|22|{|carácterPuntuación|
|23|return|palabraReservada|
|23|0|constante|
|23|;|carácterPuntuación|
|24|}|carácterPuntuación|



|25|i|identificador|
| -: | - | - |
|25|++|operador|
|25|;|carácterPuntuación|
|26|}|carácterPuntuación|
|27|return|palabraReservada|
|27|1|constante|
|27|;|carácterPuntuación|
|28|}|carácterPuntuación|
|30|int|palabraReservada|
|30|main|identificador|
|30|(|carácterPuntuación|
|30|int|palabraReservada|
|30|argc|identificador|
|30|,|carácterPuntuación|
|30|char|palabraReservada|
|30|\*\*|operador|
|30|argv|identificador|
|30|)|carácterPuntuación|
|30|{|carácterPuntuación|
|31|if|palabraReservada|
|31|(|carácterPuntuación|
|31|argc|identificador|
|31|!=|operador|
|31|3|constante|
|31|)|carácterPuntuación|
|31|{|carácterPuntuación|
|32|puts|identificador|
|32|(|carácterPuntuación|
|32|"uso: suma nro1 nro2"|literalCadena|
|32|)|carácterPuntuación|
|32|;|carácterPuntuación|
|33|exit|identificador|
|33|(|carácterPuntuación|
|33|0|constante|
|33|)|carácterPuntuación|
|33|;|carácterPuntuación|
|34|}|carácterPuntuación|
|35|if|palabraReservada|
|35|(|carácterPuntuación|
|35|!|operador|
|35|esNumero|identificador|
|35|(|carácterPuntuación|



|35|argv|identificador|
| -: | - | - |
|35|[|carácterPuntuación|
|35|1|constante|
|35|]|carácterPuntuación|
|35|)|carácterPuntuación|
|35||||operador|
|35|!|operador|
|35|esNumero|identificador|
|35|(|carácterPuntuación|
|35|argv|identificador|
|35|[|carácterPuntuación|
|35|2|constante|
|35|]|carácterPuntuación|
|35|)|carácterPuntuación|
|35|)|carácterPuntuación|
|35|{|carácterPuntuación|
|36|puts|identificador|
|36|(|carácterPuntuación|
|36|"nro1 y nro2 deben ser constantes numéricas"|literalCadena|
|36|)|carácterPuntuación|
|36|;|carácterPuntuación|
|37|exit|identificador|
|37|(|carácterPuntuación|
|37|-1|constante|
|37|)|carácterPuntuación|
|37|;|carácterPuntuación|
|38|}|carácterPuntuación|
|39|int|palabraReservada|
|39|sum1|identificador|
|39|=|operador|
|39|atoi|identificador|
|39|(|carácterPuntuación|
|39|argv|identificador|
|39|[|carácterPuntuación|
|39|1|constante|
|39|]|carácterPuntuación|
|39|)|carácterPuntuación|
|39|;|carácterPuntuación|
|40|int|palabraReservada|
|40|sum2|identificador|
|40|=|operador|
|40|atoi|identificador|



|40|(|carácterPuntuación|
| -: | - | - |
|40|argv|identificador|
|40|[|carácterPuntuación|
|40|2|constante|
|40|]|carácterPuntuación|
|40|)|carácterPuntuación|
|40|;|carácterPuntuación|
|41|printf|identificador|
|41|(|carácterPuntuación|
|41|"la suma de %d y %d es %d"|literalCadena|
|41|,|carácterPuntuación|
|41|sum1|identificador|
|41|,|carácterPuntuación|
|41|sum2|identificador|
|41|,|carácterPuntuación|
|41|sum1|identificador|
|41|+|operador|
|41|sum2|identificador|
|41|)|carácterPuntuación|
|41|;|carácterPuntuación|
|42|return|palabraReservada|
|42|0|constante|
|42|;|carácterPuntuación|
|43|}|carácterPuntuación|

