package com.example.sorteio_dados

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_result.*
import kotlin.random.Random

class result : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_result)

        val data: Bundle = intent.extras!!
        val number = data.getInt("number")

        if(number == 0){
            imageResult.setImageResource(R.drawable.um)
        } else if (number == 1) {
            imageResult.setImageResource(R.drawable.dois)
        } else if (number == 2) {
            imageResult.setImageResource(R.drawable.tres)
        } else if (number == 3) {
            imageResult.setImageResource(R.drawable.quadro)
        } else if (number == 4) {
            imageResult.setImageResource(R.drawable.cinco)
        } else if (number == 5) {
            imageResult.setImageResource(R.drawable.seis)
        }

        backButton.setOnClickListener {
            finish()
        }
    }
}