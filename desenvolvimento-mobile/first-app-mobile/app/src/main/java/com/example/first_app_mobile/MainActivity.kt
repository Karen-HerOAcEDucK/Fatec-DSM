package com.example.first_app_mobile

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    val words = arrayOf("O veio da Havan é um maldito", "Litrão 7 reais", "Sextou, vou encher a cara", "Chaves é maconheiro")

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun sortNumber0of200(view: View){

        var text = findViewById<TextView>(R.id.textResult)
        var numberSorted = Random.nextInt(200)
        text.setText("Número sorteado é: $numberSorted")

    }

    fun sortNumber0of10(view: View){
        var text = findViewById<TextView>(R.id.textResult2)
        var numberSorted = Random.nextInt(10)
        text.setText("Número Sorteado é: $numberSorted")
    }

    fun sortWordsArray(view: View){

        val text = findViewById<TextView>(R.id.textWord)

        val totalArray = words.size
        val fraseSortada = Random.nextInt(totalArray)
        text.setText(words [fraseSortada])

    }
}