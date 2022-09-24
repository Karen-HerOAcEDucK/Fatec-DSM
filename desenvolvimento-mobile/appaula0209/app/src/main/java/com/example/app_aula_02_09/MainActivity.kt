package com.example.app_aula_02_09

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    val agents = arrayOf("Astra", "Breach", "Brimstone", "Chamber", "Cypher", "Jett", "Kay/O", "Killjoy", "Neon", "Omen", "Phoenix", "Raze", "Reyna", "Sage", "Skye", "Sova", "Viper", "Yoru")

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun sortAgent(view: View){
        val resultView = findViewById<TextView>(R.id.textAgent)

        val totalArray = agents.size
        val agentSorted = Random.nextInt(totalArray)
        resultView.setText(agents[agentSorted])
    }
}