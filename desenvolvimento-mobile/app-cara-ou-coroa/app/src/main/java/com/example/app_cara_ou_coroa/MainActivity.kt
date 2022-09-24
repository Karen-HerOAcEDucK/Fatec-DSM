package com.example.app_cara_ou_coroa

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        playButton.setOnClickListener {
            val intent = Intent(applicationContext, result::class.java)

            val number = Random.nextInt(2)
            intent.putExtra("number", number)

            startActivity(intent)
        }
    }
}