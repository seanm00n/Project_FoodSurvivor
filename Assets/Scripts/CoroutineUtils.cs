using System.Collections;
using UnityEngine;

public static class CoroutineUtils
{
    public static IEnumerator WaitWhilePaused() {
        yield return new WaitUntil(() => !GM.isPaused);
    }

    public static IEnumerator WaitUntilPaused() {
        yield return new WaitUntil(() => GM.isPaused);
    }

    public static IEnumerator WaitForSecondsPaused(float seconds) {
        float elapsed = 0f;
        while(elapsed < seconds) {
            if(!GM.isPaused) {
                elapsed += Time.unscaledDeltaTime;
            }
            yield return null;
        }
    }
}
