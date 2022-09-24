package com.example.input_output_dados

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.EditText
import android.widget.TextView
import kotlin.math.absoluteValue

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun calc(view: View){
        val textEtanol = findViewById<EditText>(R.id.inputEtanol)
        val textGasolina = findViewById<EditText>(R.id.inputGasolina)
        val textViewResult = findViewById<TextView>(R.id.textResult)

        val priceEtanol = textEtanol.text.toString()
        val priceGasolina = textGasolina.text.toString()
        val validaCampos = this.validarCampos(priceEtanol, priceGasolina)

        if(validaCampos){
            val result = this.calcPrice(priceEtanol, priceGasolina)

            if(result >= 0.7){
                textViewResult.setText("Melhor utilizar Gasolina")
            } else {
                textViewResult.setText("Melhor utilizar Etanol")
            }
        } else {
            textViewResult.setText("Preencha os campos")
        }

    }

    fun validarCampos(priceEtanol: String, priceGasolina: String): Boolean{
        var camposValidados: Boolean = true

        if(priceEtanol == null || priceEtanol.equals("")){
            camposValidados = false
        } else if(priceGasolina == null || priceGasolina.equals("")){
            camposValidados = false
        }

        return camposValidados
    }

    fun calcPrice(valueEtanol: String, valueGasolina: String): Double{

        val priceEtanol = valueEtanol.toDouble()
        val priceGasolina = valueGasolina.toDouble()

        return priceEtanol / priceGasolina
    }
}