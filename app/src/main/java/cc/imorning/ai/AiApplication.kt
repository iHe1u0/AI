package cc.imorning.ai

import android.app.Application
import java.lang.System.loadLibrary

class AiApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        loadLibraries()
    }

    private fun loadLibraries() {
        val libraries = arrayOf("ai", "opencv_java4", "opencv")
        for (lib in libraries) {
            loadLibrary(lib)
        }
    }

}